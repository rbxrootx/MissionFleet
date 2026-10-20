// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875CAE0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_5875cae0() {
    __asm {
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 8]
        xor ebx, ebx
        mov dword ptr [edi], 5898d91ch
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cafe
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 8], ebx
        mov ecx, dword ptr [edi + 0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cb10
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 0ch], ebx
        mov ecx, dword ptr [edi + 10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cb22
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 10h], ebx
        mov ecx, dword ptr [edi + 14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cb34
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 14h], ebx
        push ebp
        push esi
        lea esi, [edi + 34h]
        mov ebp, 7
        mov edi, edi
        mov ecx, dword ptr [esi - 1ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cb52
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 1ch], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5875cb62
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D6: jne 0x5875cb40
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [edi + 4]
        pop esi
        pop ebp
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5875cb7e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 4], ebx
        pop edi
        pop ebx
        ret
    }
}
