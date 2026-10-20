// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D640 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_1005d640_1005D640() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov ebp, 20h
        lea esi, [ebx + 228h]
        xor edi, edi
        mov ecx, dword ptr [esi + 294h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d669
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 294h], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x1005d677
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d68d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 80h], edi
        mov ecx, dword ptr [esi - 180h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d6a3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 180h], edi
        mov ecx, dword ptr [esi - 80h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x1005d6b3
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 80h], edi
        mov ecx, dword ptr [esi - 100h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d6c9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 100h], edi
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 84: jne 0x1005d653
        __asm _emit 0x75
        __asm _emit 0x84
        mov ecx, dword ptr [ebx + 53ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d6e5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 53ch], edi
        mov ecx, dword ptr [ebx + 328h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d6fb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 328h], edi
        mov ecx, dword ptr [ebx + 540h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d711
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 540h], edi
        mov ecx, dword ptr [ebx + 32ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005d727
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 32ch], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
