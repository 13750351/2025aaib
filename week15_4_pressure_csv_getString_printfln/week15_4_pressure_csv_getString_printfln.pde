///week15_4_pressure_csv_getString_printfln
Table table = loadTable("pressure.csv","header");

for(TableRow row :table.rows()){ ///進階的Java語法 與C++同 
  String t = row.getString("測量日期");
  int up = int(row.getString("收縮壓(mmHg)"));
  int down = int(row.getString("舒張壓(mmHg)"));
  println("測量日期:"+t+"收縮壓:"+up+"舒張壓:"+down);
}
