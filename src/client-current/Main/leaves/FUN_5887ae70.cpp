// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887AE70 .. +0x194 bytes.
extern "C" __declspec(naked) void FUN_5887ae70() {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, 7ffd3effh
        cmp eax, 3
        ; Exact mapped bytes 0F 87 39 01 00 00: ja 0x5887afbb
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 04 B0 87 58: jmp dword ptr [eax*4 + 0x5887b004]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0x87
        __asm _emit 0x58
        mov eax, dword ptr [esp + 8]
        sub eax, 64h
        ; Exact mapped bytes 74 24: je 0x5887aeb6
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, 1
        ; Exact mapped bytes 74 12: je 0x5887aea9
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 1
        ; Exact mapped bytes 75 0D: jne 0x5887aea9
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1007h
        ; Exact mapped bytes E8 4A F5 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1006h
        ; Exact mapped bytes E8 3D F5 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1005h
        ; Exact mapped bytes E8 30 F5 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        sub eax, 0cah
        ; Exact mapped bytes 74 1F: je 0x5887aeed
        __asm _emit 0x74
        __asm _emit 0x1f
        sub eax, 1
        ; Exact mapped bytes 74 0D: je 0x5887aee0
        __asm _emit 0x74
        __asm _emit 0x0d
        push 1069h
        ; Exact mapped bytes E8 13 F5 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 106ch
        ; Exact mapped bytes E8 06 F5 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 106ah
        ; Exact mapped bytes E8 F9 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        sub eax, 12dh
        ; Exact mapped bytes 74 12: je 0x5887af17
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 1
        ; Exact mapped bytes 75 0D: jne 0x5887af17
        __asm _emit 0x75
        __asm _emit 0x0d
        push 10ceh
        ; Exact mapped bytes E8 DC F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 10cdh
        ; Exact mapped bytes E8 CF F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        add eax, 0fffffe65h
        cmp eax, 0ah
        ; Exact mapped bytes 77 7C: ja 0x5887afae
        __asm _emit 0x77
        __asm _emit 0x7c
        ; Exact mapped bytes FF 24 85 14 B0 87 58: jmp dword ptr [eax*4 + 0x5887b014]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xb0
        __asm _emit 0x87
        __asm _emit 0x58
        push 1136h
        ; Exact mapped bytes E8 AD F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1137h
        ; Exact mapped bytes E8 A0 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1138h
        ; Exact mapped bytes E8 93 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1139h
        ; Exact mapped bytes E8 86 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 113ah
        ; Exact mapped bytes E8 79 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 113bh
        ; Exact mapped bytes E8 6C F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 113ch
        ; Exact mapped bytes E8 5F F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 113dh
        ; Exact mapped bytes E8 52 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1146h
        ; Exact mapped bytes E8 45 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1135h
        ; Exact mapped bytes E8 38 F4 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        sub eax, 2
        ; Exact mapped bytes 74 20: je 0x5887afe4
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 37: je 0x5887b001
        __asm _emit 0x74
        __asm _emit 0x37
        push 0
        push 0
        push 0
        push 0fa0h
        ; Exact mapped bytes E8 16 0B EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 9D EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 74 17: je 0x5887b001
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0fa1h
        ; Exact mapped bytes E8 F6 0A EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2F 9D EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
