// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100537A0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_100537a0_100537A0() {
    __asm {
        push ebp
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov ecx, dword ptr [edi + 46ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100537bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 46ch], ebp
        mov ecx, dword ptr [edi + 470h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100537d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 470h], ebp
        push ebx
        push esi
        lea esi, [edi + 130h]
        mov ebx, 19h
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100537f5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0e4h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10053803
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10053813
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 64h], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 C6: jne 0x100537df
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [edi + 208h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1005382f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 208h], ebp
        mov ecx, dword ptr [edi + 210h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10053845
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 210h], ebp
        mov ecx, dword ptr [edi + 20ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1005385b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 20ch], ebp
        lea esi, [edi + 278h]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10053874
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10053866
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 1f8h]
        pop esi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x10053892
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 1f8h], ebp
        mov ecx, dword ptr [edi + 204h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100538a8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 204h], ebp
        mov ecx, dword ptr [edi + 1fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100538be
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 1fch], ebp
        mov ecx, dword ptr [edi + 12ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100538d4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 12ch], ebp
        mov ecx, dword ptr [edi + 9a4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100538ea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 9a4h], ebp
        mov dword ptr [edi + 9a4h], ebp
        mov dword ptr [edi + 0a68h], 1
        pop edi
        pop ebp
        ret
    }
}
