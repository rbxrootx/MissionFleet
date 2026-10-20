// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD3FD .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_004bd3fd_004BD3FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 112h
        push 6744e8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 47 CE 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 73 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x73
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 82 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4bd45a
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B D8 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        shl edx, 1
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E CF 02 00: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 31: jmp 0x4bd48b
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 D8 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd8
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 F7 FF FF: call 0x4bcb87
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 CA 02 00: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xca
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
