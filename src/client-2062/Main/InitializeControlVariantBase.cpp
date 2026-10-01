// Reconstructed from FUN_10104f50 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void AllocateObjectThunk();
extern "C" void SetTreeControlStyle();
extern "C" void InitializeCommon();

extern "C" __declspec(naked) void InitializeControlVariantBase() {
    __asm {
        push -1
        push 101749c3h
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
        ; Exact immediate encoding: mov dword ptr [esi], 101768a8h
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xa8
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 74h], ecx
        ; Exact immediate encoding: mov dword ptr [esi + 8ch], 100h
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jne short L_10104FFA
        __asm _emit 0x75
        __asm _emit 0x17
        push 101h
        call AllocateObjectThunk
        mov dword ptr [esi + 80h], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact immediate encoding: jmp short L_10105000
        __asm _emit 0xeb
        __asm _emit 0x06
L_10104FFA:
        mov dword ptr [esi + 80h], eax
L_10105000:
        push 58h
        mov dword ptr [esi + 84h], ebx
        mov dword ptr [esi + 88h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 90h], ebx
        mov dword ptr [esi + 94h], ebx
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
        ; Exact immediate encoding: je short L_10105056
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
        ; Exact immediate encoding: jmp short L_10105058
        __asm _emit 0xeb
        __asm _emit 0x02
L_10105056:
        xor ecx, ecx
L_10105058:
        push 0ffffff38h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 98h], ecx
        call SetTreeControlStyle
        mov eax, dword ptr [esi + 98h]
        ; Exact immediate encoding: and word ptr [eax + 24h], 0fffdh
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact immediate encoding: call dword ptr [1017509ch]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 14h]
        ; Exact immediate encoding: mov word ptr [101c9340h], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
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
