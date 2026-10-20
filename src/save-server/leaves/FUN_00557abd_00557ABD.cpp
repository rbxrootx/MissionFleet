// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557ABD .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_00557abd_00557ABD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1f5h
        push 67c630h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 84 27 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557af9
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f6h
        push 67c630h
        ; Exact mapped bytes E8 4C 12 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557af9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557adc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 38 C3 68 00: call dword ptr [0x68c338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x557b12
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4D: jmp 0x557b5f
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 0C C3 68 00: call dword ptr [0x68c30c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 38 C3 68 00: call dword ptr [0x68c338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x557b59
        __asm _emit 0x75
        __asm _emit 0x14
        push 201h
        push 67c630h
        ; Exact mapped bytes E8 EC 11 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557b59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x557b34
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
