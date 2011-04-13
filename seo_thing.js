
Drupal.behaviors.keywords_table = function(context) {
  $('#edit-add').click(function(e) {
    var values = ($.trim($('#edit-keywords').val()) || '').split(/\r\n|\r|\n/);
    
    for (var x = 0, len = values.length; x < len; x++) {
      if (!values[x]) {
        continue;
      }
      
      var html = '<tr>' +
          '<td><input type="text" name="keyword[]" class="keyword" /></td>' +
          '<td><input type="text" class="keyword-quotes" /></td>' +
          '<td><input type="text" class="keyword-brackets" /></td>' +
          '<td><input type="submit" class="keyword-remove" value="Remove" /></td>' +
        '</tr>';
          
      var $tr = $(html);
      $tr.find('.keyword').val(values[x]);
      $tr.find('.keyword-quotes').val('"' + values[x] + '"');
      $tr.find('.keyword-brackets').val('[' + values[x] + ']');
      $tr.find('.keyword-remove').click(function(e) {
        $(this).parent().parent().remove();
        e.preventDefault();
      });
      
      $('#seo-thing-keywords-table tbody').append($tr);
    }
    
    $('#edit-keywords').val('');
    
    e.preventDefault();
  });
};
