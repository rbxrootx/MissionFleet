// Reconstructed from FUN_10018950 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void AllocateObjectThunk();
extern "C" void SetTreeControlStyle();
extern "C" void InitializeResourceWrapper();
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeLanguageControl() {
    __asm {
        push -1
        push 1016d5deh
        ; Exact immediate encoding: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact immediate encoding: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 38h]
        push 40h
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push ebp
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        call InitializeCommon
        mov ecx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 40h]
        mov edx, dword ptr [esp + 48h]
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esp + 44h]
        xor ebx, ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 68h], edx
        ; Exact immediate encoding: mov dword ptr [esi + 58h], 8
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [esi + 5ch], 10h
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esp + 28h]
        cmp eax, ebx
        mov dword ptr [esp + 1ch], ebx
        ; Exact immediate encoding: mov dword ptr [esi], 10175548h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0x55
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ecx
        ; Exact immediate encoding: mov dword ptr [esi + 90h], 100h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 88h], ebx
        ; Exact immediate encoding: jne short L_10018A00
        __asm _emit 0x75
        __asm _emit 0x17
        push 101h
        call AllocateObjectThunk
        mov dword ptr [esi + 80h], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact immediate encoding: jmp short L_10018A06
        __asm _emit 0xeb
        __asm _emit 0x06
L_10018A00:
        mov dword ptr [esi + 80h], eax
L_10018A06:
        push 58h
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 8ch], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], ebx
        mov word ptr [esi + 9ch], bx
        call AllocateObjectThunk
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 1
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x01
        ; Exact immediate encoding: je short L_10018A63
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esp + 30h]
        push 40h
        push ebx
        push ebx
        push ebp
        push eax
        push esi
        mov ecx, edi
        call InitializeCommon
        ; Exact immediate encoding: mov dword ptr [edi], 101751f8h
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0xf8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact immediate encoding: jmp short L_10018A65
        __asm _emit 0xeb
        __asm _emit 0x02
L_10018A63:
        xor ecx, ecx
L_10018A65:
        push 0ffffff38h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0ach], ecx
        call SetTreeControlStyle
        mov eax, dword ptr [esi + 0ach]
        ; Exact immediate encoding: and word ptr [eax + 24h], 0fffdh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [esi + 0a8h], bl
        ; Exact immediate encoding: call dword ptr [1017509ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov word ptr [101ace34h], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact immediate encoding: mov eax, dword ptr [101ace34h]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        and eax, 0ffffh
        xor edi, edi
        cmp eax, 804h
        ; Exact immediate encoding: jg short L_10018AE8
        __asm _emit 0x7f
        __asm _emit 0x3e
        ; Exact immediate encoding: je short L_10018AD9
        __asm _emit 0x74
        __asm _emit 0x2d
        sub eax, 404h
        ; Exact immediate encoding: je short L_10018AF6
        __asm _emit 0x74
        __asm _emit 0x43
        sub eax, 0dh
        ; Exact immediate encoding: je short L_10018ACA
        __asm _emit 0x74
        __asm _emit 0x12
        dec eax
        ; Exact immediate encoding: jne short L_10018B18
        __asm _emit 0x75
        __asm _emit 0x5d
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 81h
        ; Exact immediate encoding: jmp short L_10018B03
        __asm _emit 0xeb
        __asm _emit 0x39
L_10018ACA:
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 80h
        ; Exact immediate encoding: jmp short L_10018B03
        __asm _emit 0xeb
        __asm _emit 0x2a
L_10018AD9:
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 86h
        ; Exact immediate encoding: jmp short L_10018B03
        __asm _emit 0xeb
        __asm _emit 0x1b
L_10018AE8:
        cmp eax, 0c04h
        ; Exact immediate encoding: je short L_10018AF6
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 1004h
        ; Exact immediate encoding: jne short L_10018B18
        __asm _emit 0x75
        __asm _emit 0x22
L_10018AF6:
        push ebx
        push 2
        push 2
        push ebx
        push 4
        push 88h
L_10018B03:
        push ebx
        push ebx
        push ebx
        push 190h
        push ebx
        push ebx
        push ebx
        push 10h
        ; Exact immediate encoding: call dword ptr [1017503ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
L_10018B18:
        cmp edi, ebx
        mov dword ptr [esi + 0a4h], ebx
        ; Exact immediate encoding: je short L_10018B4B
        __asm _emit 0x74
        __asm _emit 0x29
        push 10h
        call AllocateObjectThunk
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        ; Exact immediate encoding: mov byte ptr [esp + 1ch], 2
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        __asm _emit 0x02
        ; Exact immediate encoding: je short L_10018B43
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        mov ecx, eax
        call InitializeResourceWrapper
        ; Exact immediate encoding: jmp short L_10018B45
        __asm _emit 0xeb
        __asm _emit 0x02
L_10018B43:
        xor eax, eax
L_10018B45:
        mov dword ptr [esi + 0a0h], eax
L_10018B4B:
        ; Exact immediate encoding: mov ecx, 0ah
        __asm _emit 0xb9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [esi + 0bch]
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], ebx
        mov dword ptr [esi + 0b8h], ebx
        ; Exact immediate encoding: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 0e4h], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact immediate encoding: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret 28h
    }
}
