// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58649CD0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_58649cd0_58649CD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 240h]
        ; Exact mapped bytes E8 89 6F 17 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0x17
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 62: je 0x58649d52
        __asm _emit 0x74
        __asm _emit 0x62
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 5A: jle 0x58649d50
        __asm _emit 0x7e
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 240h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F 7A 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 7A 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 248h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 7A 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7a
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 F0 FF FF: call 0x58648e10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 70: jmp 0x58649dc2
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 240h]
        ; Exact mapped bytes E8 90 F9 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 5
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 5A: jge 0x58649dc2
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 240h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DD 79 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C2 79 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 248h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A7 79 17 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F F0 FF FF: call 0x58648e10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xf0
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
