// Reconstructed from FUN_1001dab0 Ghidra pseudocode and disassembly.
// Direct call destinations are named and checked against the mapped target.
extern "C" void FUN_10015b40();
extern "C" void FUN_10017900();
extern "C" void FUN_10018840();
extern "C" void FUN_1001d710();
extern "C" void FUN_1001d870();
extern "C" void FUN_10021260();
extern "C" void FUN_100218d0();
extern "C" void FUN_100facd0();
extern "C" void FUN_100fecd0();
extern "C" void FUN_100fed50();

extern "C" __declspec(naked) void FUN_1001dab0() {
    __asm {
        sub esp, 8f0h
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        push 1017f514h
        mov ecx, dword ptr [ebp + 64h]
        call FUN_10018840
        mov ecx, dword ptr [ebp + 68h]
        push 1017f514h
        call FUN_10018840
        xor ebx, ebx
        push 96h
        push 0c8h
        mov ecx, ebp
        mov dword ptr [ebp + 94h], ebx
        call FUN_1001d870
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        add eax, 6ch
        add ecx, 0aah
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 88h]
        call FUN_100fecd0
        ; Exact immediate encoding: mov ecx, dword ptr [101c5744h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 7
        call FUN_100218d0
        mov ecx, dword ptr [ebp + 88h]
        push eax
        call FUN_10015b40
        mov ecx, dword ptr [ebp + 8ch]
        push ebx
        call FUN_10015b40
        mov ecx, dword ptr [ebp + 8ch]
        push 1
        push ebx
        call FUN_10017900
        mov eax, dword ptr [esp + 904h]
        mov dword ptr [ebp + 70h], ebx
        cmp eax, 63h
        mov dword ptr [ebp + 74h], ebx
        ; Exact immediate encoding: jg near ptr L_1001E649
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001E614
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: jmp dword ptr [eax*4 + 100202e0h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 64h]
        push 101810a0h
        call FUN_10018840
        mov edx, dword ptr [ebp + 64h]
        lea eax, [esp + 18h]
        push eax
        push 101810a0h
        mov esi, dword ptr [edx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101810a0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 70h], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 28h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10181084h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        mov esi, dword ptr [eax + 50h]
        push ecx
        push 10181084h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10181084h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 1018106ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 68h]
        lea edx, [esp + 18h]
        push edx
        push 1018106ch
        mov esi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 1018106ch
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 68h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10181054h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10181054h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10181054h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 1018103ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 18h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 1018103ch
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 1018103ch
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10181004h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 18h]
        push ecx
        push 10181004h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10181004h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180fech
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180fech
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180fech
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180fd0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180fd0h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180fd0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push 108h
        push 138h
        mov ecx, ebp
        call FUN_1001d870
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 4]
        add ecx, 6ch
        add edx, 0aah
        push ecx
        mov ecx, dword ptr [ebp + 88h]
        push edx
        call FUN_100fecd0
        mov ecx, dword ptr [ebp + 64h]
        push 1017f514h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 1017f514h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1017f514h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180fb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180fb0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180fb0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f90h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180f90h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f90h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [esp + 910h]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 12h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 90h], ecx
        ; Exact immediate encoding: mov dword ptr [ebp + 94h], 1
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov dword ptr [101c5900h], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f6ch
        call FUN_10018840
        mov edx, dword ptr [ebp + 64h]
        lea eax, [esp + 18h]
        push eax
        push 10180f6ch
        mov esi, dword ptr [edx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f6ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f5ch
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180f5ch
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f5ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f3ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180f3ch
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f3ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: mov dword ptr [101c5900h], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f38h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180f38h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f38h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180f08h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180f08h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180f08h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180ecch
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180ecch
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180ecch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180ea8h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180ea8h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180ea8h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: mov eax, dword ptr [101c56f8h]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact immediate encoding: mov ecx, 2
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 9a4h]
        or word ptr [eax + 24h], cx
        mov dword ptr [ebp + 70h], ecx
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 14h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180e70h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180e70h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180e70h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180e44h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180e44h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180e44h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180e1ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180e1ch
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180e1ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180e00h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180e00h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180e00h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180de0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 18h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180de0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180de0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180dc0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180dc0h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180dc0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180d94h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180d94h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180d94h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180d70h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180d70h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180d70h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 64h]
        push 10180d4ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180d4ch
        mov esi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180d4ch
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180d1ch
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 18h]
        push ecx
        push 10180d1ch
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180d1ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180cf0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 18h]
        push edx
        push 10180cf0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180cf0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180cd8h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        mov esi, dword ptr [eax + 50h]
        push ecx
        push 10180cd8h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180cd8h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180cb4h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 68h]
        lea edx, [esp + 18h]
        push edx
        push 10180cb4h
        mov esi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180cb4h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 68h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
L_1001E614:
        push 108h
        push 138h
        mov ecx, ebp
        call FUN_1001d870
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 4]
        add eax, 6ch
        add ecx, 0aah
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 88h]
        call FUN_100fecd0
        mov dword ptr [ebp + 74h], ebx
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
L_1001E649:
        cmp eax, 0c8h
        ; Exact immediate encoding: jg near ptr L_1001EC49
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001EBEF
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, -64h
        cmp eax, 0dh
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x65
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp dword ptr [eax*4 + 10020360h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 64h]
        push 10180c90h
        call FUN_10018840
        mov edx, dword ptr [ebp + 64h]
        lea eax, [esp + 18h]
        push eax
        push 10180c90h
        mov esi, dword ptr [edx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180c90h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180c74h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov ebx, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        mov esi, dword ptr [eax + 50h]
        push ecx
        push 10180c74h
        mov edi, dword ptr [esi]
        call ebx
        push eax
        push 10180c74h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov esi, dword ptr [esp + 908h]
        mov ecx, dword ptr [ebp + 68h]
        push esi
        call FUN_10018840
        mov ecx, dword ptr [ebp + 68h]
        lea eax, [esp + 10h]
        push eax
        push esi
        mov edi, dword ptr [ecx + 50h]
        mov edx, dword ptr [edi]
        mov dword ptr [esp + 20h], edx
        call ebx
        mov edx, dword ptr [esp + 1ch]
        push eax
        push esi
        mov ecx, edi
        call dword ptr [edx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 68h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180c50h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180c50h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180c50h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180c2ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180c2ch
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180c2ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180c0ch
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180c0ch
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180c0ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bf0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180bf0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180bf0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bd0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 10h]
        mov esi, dword ptr [eax + 50h]
        push ecx
        push 10180bd0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180bd0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180c74h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 68h]
        lea edx, [esp + 10h]
        push edx
        push 10180c74h
        mov esi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180c74h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 68h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bd0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180bd0h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180bd0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180bb0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180bb0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180b8ch
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180b8ch
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180b8ch
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180bb0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180bb0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180b68h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180b68h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180b68h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180bb0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180bb0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180b44h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180b44h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180b44h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180bb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180bb0h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180bb0h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180b20h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180b20h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180b20h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
L_1001EBEF:
        mov ecx, dword ptr [ebp + 64h]
        push 10180b00h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180b00h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180b00h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
L_1001EC49:
        cmp eax, 190h
        ; Exact immediate encoding: jg near ptr L_1001EFC2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001EF61
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffed4h
        cmp eax, 6
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x63
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp dword ptr [eax*4 + 10020398h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 64h]
        push 10180ad4h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180ad4h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180ad4h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180ab8h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180ab8h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180ab8h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180a94h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180a94h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180a94h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 2
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180a84h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180a84h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180a84h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180a6ch
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180a6ch
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180a6ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov ecx, dword ptr [101c56f0h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d48h]
        mov ecx, dword ptr [edx + 0a8h]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 8]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 108h
        push 138h
        mov ecx, ebp
        call FUN_1001d870
        mov ecx, dword ptr [ebp + 64h]
        push 10180a50h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180a50h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180a50h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180a24h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180a24h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180a24h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 68h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180fb0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180fb0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180fb0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
L_1001EF61:
        mov ecx, dword ptr [ebp + 64h]
        push 101809ech
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101809ech
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101809ech
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 190h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
L_1001EFC2:
        cmp eax, 1f4h
        ; Exact immediate encoding: jg near ptr L_1001F7B0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001F79F
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffe6fh
        cmp eax, 3dh
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 1002043ch]
        ; Exact immediate encoding: jmp dword ptr [ecx*4 + 100203b4h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 64h]
        push 101809c8h
        call FUN_10018840
        mov edx, dword ptr [ebp + 64h]
        lea eax, [esp + 10h]
        push eax
        push 101809c8h
        mov esi, dword ptr [edx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101809c8h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101809a8h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101809a8h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101809a8h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 192h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180988h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 10180988h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180988h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180964h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180964h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180964h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        ; Exact immediate encoding: jmp near ptr L_100202AA
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180930h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180930h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180930h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180914h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180914h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180914h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101808f0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 101808f0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101808f0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101808c8h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101808c8h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101808c8h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 1018089ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 1018089ch
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018089ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180870h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180870h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180870h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180844h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180844h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180844h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180828h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180828h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180828h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 1018080ch
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 1018080ch
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018080ch
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101807e0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101807e0h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101807e0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101807ach
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 101807ach
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101807ach
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 101807e0h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101807e0h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101807e0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180cf0h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10180cf0h
        mov esi, dword ptr [ecx + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180cf0h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 64h]
        push 10180778h
        call FUN_10018840
        mov eax, dword ptr [ebp + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180778h
        mov esi, dword ptr [eax + 50h]
        mov edi, dword ptr [esi]
        ; Exact immediate encoding: call dword ptr [101750a8h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10180778h
        mov ecx, esi
        call dword ptr [edi + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact immediate encoding: jmp near ptr L_100202BE
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 1018075ch
        mov ecx, ebp
        call FUN_1001d710
        push 32h
        lea ecx, [esp + 3ch]
        push 10180744h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 38h]
        mov ecx, ebp
        push edx
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180728h
        mov ecx, ebp
        call FUN_1001d710
        push 0fh
        lea eax, [esp + 3ch]
        push 10180710h
        push eax
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 38h]
        push ecx
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 101806f4h
        mov ecx, ebp
        call FUN_1001d710
        push 6
        lea edx, [esp + 3ch]
        push 10180710h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 101806cch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 101806b0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180688h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 908h]
        lea edx, [esp + 38h]
        push ecx
        push 10180668h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180650h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 908h]
        lea edx, [esp + 38h]
        push ecx
        push 10180638h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180614h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 101805ech
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 101805c0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180594h
        mov ecx, ebp
        call FUN_1001d710
        push 10180560h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 1cbh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180548h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180518h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 908h]
        lea edx, [esp + 38h]
        push ecx
        push 101804f8h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_1001F79F:
        push 101804dch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
L_1001F7B0:
        cmp eax, 262h
        ; Exact immediate encoding: jg near ptr L_1001FB9D
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001FB40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffe0bh
        cmp eax, 63h
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 10020540h]
        ; Exact immediate encoding: jmp dword ptr [ecx*4 + 1002047ch]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x10
        push 101804bch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 101804a0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180488h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180468h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180444h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180428h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180404h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 101803e4h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 101803bch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180398h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180374h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180348h
        mov ecx, ebp
        call FUN_1001d710
        push 10180324h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180304h
        mov ecx, ebp
        call FUN_1001d710
        push 10180324h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101802e0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101802c0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101802a8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180290h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180270h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180248h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180228h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180208h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101801ech
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101801d0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 101801a0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180184h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180168h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 1018013ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180120h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180100h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 101800e0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 101800bch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 101800a0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1018007ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180058h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180034h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 10180008h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017ffech
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017ffd0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017ffb0h
        mov ecx, ebp
        call FUN_1001d710
        push 1017ff8ch
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017ff6ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017ff48h
        mov ecx, ebp
        call FUN_1001d710
        push 1017ff18h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fef0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fec8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fea8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fe7ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fe54h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fe30h
        ; Exact immediate encoding: jmp short L_1001FB28
        __asm _emit 0xeb
        __asm _emit 0x05
        push 1017fe08h
L_1001FB28:
        mov ecx, ebp
        call FUN_1001d710
        push 1017fdech
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FB40:
        mov edi, dword ptr [esp + 908h]
        or ecx, 0ffffffffh
        xor eax, eax
        lea edx, [esp + 20h]
        ; Exact immediate encoding: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        lea edx, [esp + 38h]
        shr ecx, 2
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact immediate encoding: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea ecx, [esp + 20h]
        push ecx
        push 1017fdc4h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        push 1017fda0h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FB9D:
        cmp eax, 38fh
        ; Exact immediate encoding: jg near ptr L_1001FFB8
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001FFA7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 32ah
        ; Exact immediate encoding: jg near ptr L_1001FE87
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_1001FE76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffd94h
        cmp eax, 0b9h
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100205d4h]
        ; Exact immediate encoding: jmp dword ptr [ecx*4 + 100205a4h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x10
        mov edi, dword ptr [esp + 908h]
        or ecx, 0ffffffffh
        xor eax, eax
        lea edx, [esp + 20h]
        ; Exact immediate encoding: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        lea edx, [esp + 38h]
        shr ecx, 2
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact immediate encoding: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea ecx, [esp + 20h]
        push ecx
        push 1017fd74h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        push 1017fd3ch
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 908h]
        or ecx, 0ffffffffh
        xor eax, eax
        lea edx, [esp + 20h]
        ; Exact immediate encoding: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        sub edi, ecx
        mov eax, ecx
        mov esi, edi
        mov edi, edx
        lea edx, [esp + 38h]
        shr ecx, 2
        ; Exact immediate encoding: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        and ecx, 3
        ; Exact immediate encoding: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        lea ecx, [esp + 20h]
        push ecx
        push 1017fd10h
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 38h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        push 1017fcf8h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fcd8h
        mov ecx, ebp
        call FUN_1001d710
        push 1017fcb8h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fc8ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fc60h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fc28h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 320h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fbf8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 321h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fbc8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 322h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fb98h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 323h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fb70h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 324h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fb3ch
        mov ecx, ebp
        mov byte ptr [esp + 3ch], bl
        call FUN_1001d710
        ; Exact immediate encoding: mov esi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov edi, dword ptr [101750b0h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact immediate encoding: mov dword ptr [esp + 18h], 1
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FD73:
        mov ecx, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov ebx, 1
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ebx, cl
        lea ecx, [esp + 38h]
        push ecx
        call esi
        test eax, eax
        ; Exact immediate encoding: jle short L_1001FD9C
        __asm _emit 0x7e
        __asm _emit 0x13
        lea edx, [esp + 38h]
        push 10180f38h
        push edx
        call esi
        lea eax, [esp + eax + 3ch]
        push eax
        call edi
L_1001FD9C:
        mov ecx, dword ptr [esp + 910h]
        test dword ptr [ecx], ebx
        ; Exact immediate encoding: je near ptr L_1001FE58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 18h]
        dec edx
        cmp edx, 8
        ; Exact immediate encoding: ja near ptr L_1001FE58
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        dec eax
        ; Exact immediate encoding: jmp dword ptr [eax*4 + 10020690h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x10
        lea ecx, [esp + 38h]
        push 1017fb38h
        push ecx
        call esi
        lea edx, [esp + eax + 3ch]
        push edx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x7e
        lea eax, [esp + 38h]
        push 1017fb34h
        push eax
        call esi
        lea ecx, [esp + eax + 3ch]
        push ecx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x6b
        push 1017fb30h
        ; Exact immediate encoding: jmp short L_1001FE4A
        __asm _emit 0xeb
        __asm _emit 0x58
        lea ecx, [esp + 38h]
        push 1017fb2ch
        push ecx
        call esi
        lea edx, [esp + eax + 3ch]
        push edx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x51
        lea eax, [esp + 38h]
        push 1017fb28h
        push eax
        call esi
        lea ecx, [esp + eax + 3ch]
        push ecx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 1017fb24h
        ; Exact immediate encoding: jmp short L_1001FE4A
        __asm _emit 0xeb
        __asm _emit 0x2b
        lea ecx, [esp + 38h]
        push 1017fb20h
        push ecx
        call esi
        lea edx, [esp + eax + 3ch]
        push edx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x24
        lea eax, [esp + 38h]
        push 1017fb1ch
        push eax
        call esi
        lea ecx, [esp + eax + 3ch]
        push ecx
        ; Exact immediate encoding: jmp short L_1001FE56
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1017fb18h
L_1001FE4A:
        lea edx, [esp + 3ch]
        push edx
        call esi
        lea eax, [esp + eax + 3ch]
        push eax
L_1001FE56:
        call edi
L_1001FE58:
        mov eax, dword ptr [esp + 18h]
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 325h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, 0ah
        mov dword ptr [esp + 18h], eax
        ; Exact immediate encoding: jl near ptr L_1001FD73
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FE76:
        push 1017faech
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FE87:
        add eax, 0fffffc7ch
        cmp eax, 0ah
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp dword ptr [eax*4 + 100206b4h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x10
        push 1017fad4h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 384h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fabch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 385h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fa90h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 386h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x86
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fa5ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 387h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fa40h
        mov ecx, ebp
        call FUN_1001d710
        push 1017fa20h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 388h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f9f4h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 389h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f9bch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 38ah
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017fa40h
        mov ecx, ebp
        call FUN_1001d710
        push 1017f99ch
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 38bh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f970h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f944h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f91ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FFA7:
        push 1017f8fch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
L_1001FFB8:
        cmp eax, 3c0h
        ; Exact immediate encoding: jg near ptr L_100201DF
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: je near ptr L_100201BB
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0fffffc70h
        cmp eax, 26h
        ; Exact immediate encoding: ja near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 10020730h]
        ; Exact immediate encoding: jmp dword ptr [ecx*4 + 100206e0h]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x10
        push 1017f8d8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f8b8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f89ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: mov al, byte ptr [101ace99h]
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp al, 0ffh
        ; Exact immediate encoding: jne short L_10020033
        __asm _emit 0x75
        __asm _emit 0x11
        push 1017f87ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
L_10020033:
        ; Exact immediate encoding: mov ecx, dword ptr [101c58c0h]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov dl, al
        mov eax, dword ptr [edx*4 + 101ace80h]
        push eax
        call FUN_100facd0
        add eax, 54h
        lea ecx, [esp + 38h]
        push eax
        push 1017f858h
        push ecx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 38h]
        mov ecx, ebp
        push edx
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f830h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f810h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f7f8h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f7cch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f794h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 398h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f760h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 399h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f740h
        mov ecx, ebp
        call FUN_1001d710
        push 1017f720h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 39ah
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f6f0h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 39bh
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f6c0h
        mov ecx, ebp
        call FUN_1001d710
        push 1017f6a4h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f670h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f64ch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f620h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f5f4h
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 3a0h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1017f5cch
        mov ecx, ebp
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 908h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        push 1017f5b0h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
L_100201BB:
        push 1017f57ch
        mov ecx, ebp
        call FUN_1001d710
        push 1017f550h
        mov ecx, ebp
        call FUN_10021260
        ; Exact immediate encoding: mov dword ptr [ebp + 74h], 3c0h
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_100201DF:
        cmp eax, 3e7h
        ; Exact immediate encoding: je short L_10020223
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp eax, 2710h
        ; Exact immediate encoding: jne near ptr L_100202CB
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 908h]
        lea edx, [esp + 100h]
        push ecx
        push 1017f54ch
        push edx
        ; Exact immediate encoding: call dword ptr [10175188h]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 100h]
        mov ecx, ebp
        push eax
        call FUN_1001d710
        ; Exact immediate encoding: jmp near ptr L_100202CB
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
L_10020223:
        mov ecx, dword ptr [ebp + 64h]
        push 1017f520h
        call FUN_10018840
        mov ecx, dword ptr [ebp + 64h]
        ; Exact immediate encoding: mov edi, dword ptr [101750a8h]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        mov esi, dword ptr [ecx + 50h]
        push edx
        push 1017f520h
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 1017f520h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ebp + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp + 64h]
        call FUN_100fed50
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 68h]
        push 10180b44h
        call FUN_10018840
        mov eax, dword ptr [ebp + 68h]
        lea ecx, [esp + 10h]
        push ecx
        push 10180b44h
        mov esi, dword ptr [eax + 50h]
        mov ebx, dword ptr [esi]
        call edi
        push eax
        push 10180b44h
        mov ecx, esi
        call dword ptr [ebx + 4]
        mov eax, dword ptr [esp + 10h]
L_100202AA:
        cdq
        sub eax, edx
        mov edx, dword ptr [ebp + 4]
        mov ecx, dword ptr [ebp + 68h]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
L_100202BE:
        call FUN_100fed50
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 4]
L_100202CB:
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8f0h
        ret 10h
    }
}
