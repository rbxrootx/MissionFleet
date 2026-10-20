// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58652140 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_58652140_58652140() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        ; Exact mapped bytes E8 19 EB 16 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xeb
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 62: je 0x586521c2
        __asm _emit 0x74
        __asm _emit 0x62
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 5A: jle 0x586521c0
        __asm _emit 0x7e
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DF F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C4 F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 EF FF FF: call 0x586510f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 70: jmp 0x58652232
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 20 75 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 5
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 5A: jge 0x58652232
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 214h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 52 F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 37 F5 16 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF EE FF FF: call 0x586510f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
