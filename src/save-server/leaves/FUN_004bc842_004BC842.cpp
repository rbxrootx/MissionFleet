// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC842 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004bc842_004BC842() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 111h
        push 674470h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 02 DA 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 7F 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 8E 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4bc89d
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 E4 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB DA 02 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x4bc8cc
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 E4 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 F7 FF FF: call 0x4bc007
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 D6 02 00: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
