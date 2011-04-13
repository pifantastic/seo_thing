
Drupal.behaviors.keywords_table = function(context) {
  $('#add').click(function(e) {
    var val = $('#keyword').val(),
      html = '<tr>' +
        '<td><input type="text" name="keyword[]" class="keyword" /></td>' +
        '<td><input type="text" class="keyword-quotes" /></td>' +
        '<td><input type="text" class="keyword-brackets" /></td>' +
        '<td><input type="submit" class="keyword-remove" value="Remove" /></td>' +
        '</tr>';
        
    var $tr = $(html);
    $tr.find('.keyword').val(val);
    $tr.find('.keyword-quotes').val('"' + val + '"');
    $tr.find('.keyword-brackets').val('[' + val + ']');
    $tr.find('.keyword-remove').click(function(e) {
      $(this).parent().parent().remove();
      e.preventDefault();
    });
    
    $('#seo-thing-keywords-table tbody').append($tr);
    
    $('#keyword').val('');
    
    e.preventDefault();
  });
};
