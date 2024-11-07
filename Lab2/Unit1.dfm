object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 434
  ClientWidth = 968
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clBlack
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 8
    Top = 36
    Width = 123
    Height = 23
    Caption = #1048#1090#1086#1075#1086#1074#1099#1081' '#1095#1077#1082':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 560
    Top = 36
    Width = 252
    Height = 23
    Caption = #1051#1100#1075#1086#1090#1085#1099#1077' '#1082#1072#1090#1077#1075#1086#1088#1080#1080' '#1075#1088#1072#1078#1076#1072#1085':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 229
    Width = 166
    Height = 23
    Caption = #1044#1072#1085#1085#1099#1077' '#1086' '#1082#1083#1080#1077#1085#1090#1072#1093':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -17
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 258
    Width = 539
    Height = 164
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clBlack
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object FormTabsBar1: TFormTabsBar
    Left = 0
    Top = 0
    Width = 968
    Height = 30
    ParentColor = False
    ExplicitWidth = 966
  end
  object ButtonAdd: TButton
    Left = 568
    Top = 258
    Width = 113
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = ButtonAddClick
  end
  object ButtonDelete: TButton
    Left = 568
    Top = 327
    Width = 113
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = ButtonDeleteClick
  end
  object ButtonEdit: TButton
    Left = 568
    Top = 397
    Width = 113
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = ButtonEditClick
  end
  object ButtonExit: TButton
    Left = 869
    Top = 365
    Width = 75
    Height = 34
    Caption = #1042#1099#1093#1086#1076
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = [fsItalic]
    ParentFont = False
    TabOrder = 5
    OnClick = ButtonExitClick
  end
  object DBGrid2: TDBGrid
    Left = 560
    Top = 65
    Width = 281
    Height = 141
    DataSource = DataSource2
    TabOrder = 6
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clBlack
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 343
    Top = 127
    Width = 113
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 343
    Top = 65
    Width = 113
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button2Click
  end
  object DBGrid3: TDBGrid
    Left = 8
    Top = 65
    Width = 329
    Height = 141
    DataSource = DataSource3
    TabOrder = 9
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clBlack
    TitleFont.Height = -12
    TitleFont.Name = 'Segoe UI'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID_'#1095#1077#1082#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'ID_'#1082#1083#1080#1077#1085#1090#1072
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'ID_'#1082#1072#1090#1077#1075#1086#1088#1080#1080
        Visible = False
      end
      item
        Expanded = False
        FieldName = #1057#1091#1084#1084#1072
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1050#1083#1080#1077#1085#1090
        Visible = True
      end
      item
        Expanded = False
        FieldName = #1050#1072#1090#1077#1075#1086#1088#1080#1103
        Visible = True
      end>
  end
  object Button3: TButton
    Left = 343
    Top = 96
    Width = 113
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 10
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 847
    Top = 181
    Width = 113
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 847
    Top = 65
    Width = 113
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 847
    Top = 124
    Width = 113
    Height = 25
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 343
    Top = 181
    Width = 113
    Height = 25
    Caption = #1054#1090#1095#1077#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlack
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    OnClick = Button7Click
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=ASOIU;Data Source=DESKTOP-F7FARM1\SQLEX' +
      'PRESS'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 768
    Top = 213
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1050#1083#1080#1077#1085#1090#1099
    Left = 800
    Top = 213
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 832
    Top = 213
  end
  object ADOConnection2: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=ASOIU;Data Source=DESKTOP-F7FARM1\SQLEX' +
      'PRESS'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 760
    Top = 261
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = ADOConnection2
    CursorType = ctStatic
    TableName = #1050#1072#1090#1077#1075#1086#1088#1080#1103
    Left = 792
    Top = 261
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 824
    Top = 261
  end
  object ADOConnection3: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=SQLOLEDB.1;Integrated Security=SSPI;Persist Security In' +
      'fo=False;Initial Catalog=ASOIU;Data Source=DESKTOP-F7FARM1\SQLEX' +
      'PRESS'
    LoginPrompt = False
    Provider = 'SQLOLEDB.1'
    Left = 760
    Top = 309
  end
  object ADOTable3: TADOTable
    Active = True
    Connection = ADOConnection3
    CursorType = ctStatic
    TableName = #1063#1077#1082
    Left = 792
    Top = 309
    object ADOTable3ID_чека: TAutoIncField
      FieldName = 'ID_'#1095#1077#1082#1072
      ReadOnly = True
    end
    object ADOTable3Клиент: TStringField
      FieldKind = fkLookup
      FieldName = #1050#1083#1080#1077#1085#1090
      LookupDataSet = ADOTable1
      LookupKeyFields = 'ID_'#1082#1083#1080#1077#1085#1090#1072
      LookupResultField = #1060#1048#1054
      KeyFields = 'ID_'#1082#1083#1080#1077#1085#1090#1072
      Lookup = True
    end
    object ADOTable3Категория: TStringField
      FieldKind = fkLookup
      FieldName = #1050#1072#1090#1077#1075#1086#1088#1080#1103
      LookupDataSet = ADOTable2
      LookupKeyFields = 'ID_'#1082#1072#1090#1077#1075#1086#1088#1080#1080
      LookupResultField = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
      KeyFields = 'ID_'#1082#1072#1090#1077#1075#1086#1088#1080#1080
      Lookup = True
    end
    object ADOTable3Сумма: TWideStringField
      FieldName = #1057#1091#1084#1084#1072
      Size = 6
    end
    object ADOTable3ID_клиента: TIntegerField
      FieldName = 'ID_'#1082#1083#1080#1077#1085#1090#1072
    end
    object ADOTable3ID_категории: TIntegerField
      FieldName = 'ID_'#1082#1072#1090#1077#1075#1086#1088#1080#1080
    end
  end
  object DataSource3: TDataSource
    DataSet = ADOTable3
    Left = 824
    Top = 309
  end
end
