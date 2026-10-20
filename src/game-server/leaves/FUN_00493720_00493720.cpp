// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00493720 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_00493720_00493720() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        not eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        and edx, eax
        or edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        and edx, dword ptr [eax + 68h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], edx
        mov edx, dword ptr [ebp + 8]
        and edx, 8000000h
        test edx, edx
        ; Exact mapped bytes 75 0C: jne 0x49375c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        and eax, 8000000h
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x493799
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp + 0ch]
        not ecx
        and ecx, 8000000h
        push ecx
        push 0bh
        push 0fffffdfeh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x493799
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0f7ffffffh
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0f7ffffffh
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 800000h
        test ecx, ecx
        ; Exact mapped bytes 75 0D: jne 0x4937b3
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 0ch]
        and edx, 800000h
        test edx, edx
        ; Exact mapped bytes 74 3B: je 0x4937ee
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 0ch]
        and eax, 800000h
        push eax
        push 2
        push 0fffffe08h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4937ee
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ff7fffffh
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ff7fffffh
        mov dword ptr [ebp + 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 43 DC 05 00: call 0x4f1449
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
