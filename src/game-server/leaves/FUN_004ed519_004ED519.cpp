// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED519 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_004ed519_004ED519() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4ed53c
        __asm _emit 0x7d
        __asm _emit 0x11
        push 55h
        push 5c4bd4h
        ; Exact mapped bytes E8 C9 74 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed53c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4ed525
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], 7ffffffeh
        ; Exact mapped bytes 7E 11: jle 0x4ed55c
        __asm _emit 0x7e
        __asm _emit 0x11
        push 56h
        push 5c4bd4h
        ; Exact mapped bytes E8 A9 74 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed55c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ed542
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x4ed572
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 81 39 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x4ed5c8
        __asm _emit 0xeb
        __asm _emit 0x56
        push 76h
        push 5c4bd4h
        mov edx, dword ptr [ebp + 8]
        add edx, 0dh
        push edx
        ; Exact mapped bytes E8 AE FA FF FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 FA F9 FF: call 0x48cfc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD F9 F9 FF: call 0x48cfc0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
