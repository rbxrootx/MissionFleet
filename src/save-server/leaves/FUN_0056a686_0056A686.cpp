// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A686 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_0056a686_0056A686() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0b8h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x56a6bd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0b8h]
        and eax, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 8F C3 FB FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5C: je 0x56a72d
        __asm _emit 0x74
        __asm _emit 0x5c
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 6ch
        ; Exact mapped bytes E8 99 C3 FB FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x56a6fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 67d38ch
        ; Exact mapped bytes E8 49 E6 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xe6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a6fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x56a6e5
        __asm _emit 0x75
        __asm _emit 0xe3
        push 4ah
        push 67d38ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4E FB F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfb
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 1
        push 363h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 81 4E F6 FF: call 0x4cf5ac
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 9E: jmp 0x56a6cb
        __asm _emit 0xeb
        __asm _emit 0x9e
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
