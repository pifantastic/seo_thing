<div id="seo-thing-keywords-table-wrapper">
  <form method="post" action="<?php echo base_path() ?>keywords">
    <div>
      <textarea id="keyword"></textarea>
      <input type="submit" name="add" id="add" value="Add" />
      <input type="submit" name="download" id="download" value="Download CSV" />
    </div>
    <table id="seo-thing-keywords-table">
      <thead>
        <tr>
          <th>Keyword</th>
          <th></th>
          <th></th>
          <th></th>
        </tr>
      </thead>
      <tbody></tbody>
      <tfoot></tfoot>
    </table>
  </form>
</div>
