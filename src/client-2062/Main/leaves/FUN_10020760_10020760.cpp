// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10020760 .. +0x947 bytes.
extern "C" __declspec(naked) void FUN_10020760_10020760() {
    __asm {
        sub esp, 88h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        push 1017f514h
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 C7 80 FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push 1017f514h
        ; Exact mapped bytes E8 BA 80 FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        push 96h
        push 0c8h
        mov ecx, esi
        mov dword ptr [esi + 94h], 0
        ; Exact mapped bytes E8 CF D0 FF FF: call 0x1001d870
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 9
        ; Exact mapped bytes E8 22 11 00 00: call 0x100218d0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push eax
        ; Exact mapped bytes E8 86 53 FF FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0bh
        ; Exact mapped bytes E8 09 11 00 00: call 0x100218d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push eax
        ; Exact mapped bytes E8 6D 53 FF FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 9ch]
        mov ebx, 1
        cmp eax, 64h
        mov dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 0F 8F 15 05 00 00: jg 0x10020d00
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 15 04 00 00: je 0x10020c06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 0F 87 99 08 00 00: ja 0x10021093
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 A8 10 02 10: jmp dword ptr [eax*4 + 0x100210a8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        push 1018145ch
        ; Exact mapped bytes E8 32 80 FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 1018145ch
        mov edi, dword ptr [eax + 50h]
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018145ch
        mov ecx, edi
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 02 E5 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], ebx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 108h
        push 138h
        mov ecx, esi
        ; Exact mapped bytes E8 F3 CF FF FF: call 0x1001d870
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        push 1018144ch
        ; Exact mapped bytes E8 B6 7F FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        lea edx, [esp + 10h]
        push edx
        push 1018144ch
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018144ch
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 86 E4 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 2
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 10181430h
        ; Exact mapped bytes E8 47 7F FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10181430h
        mov edi, dword ptr [eax + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10181430h
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 17 E4 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 3
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 1018140ch
        ; Exact mapped bytes E8 D8 7E FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        lea edx, [esp + 10h]
        push edx
        push 1018140ch
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018140ch
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 A8 E3 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 4
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101813e8h
        ; Exact mapped bytes E8 69 7E FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101813e8h
        mov edi, dword ptr [eax + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101813e8h
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 39 E3 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 5
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 101813cch
        ; Exact mapped bytes E8 FA 7D FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        lea edx, [esp + 10h]
        push edx
        push 101813cch
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101813cch
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 CA E2 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 6
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 108h
        push 138h
        mov ecx, esi
        ; Exact mapped bytes E8 B7 CD FF FF: call 0x1001d870
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        push 101813b8h
        ; Exact mapped bytes E8 7A 7D FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 101813b8h
        mov edi, dword ptr [eax + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 101813b8h
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 4A E2 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 7
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 10181398h
        ; Exact mapped bytes E8 0B 7D FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        lea edx, [esp + 10h]
        push edx
        push 10181398h
        mov edi, dword ptr [ecx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10181398h
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 DB E1 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 8
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 64h]
        push 10181374h
        ; Exact mapped bytes E8 9C 7C FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 64h]
        lea ecx, [esp + 10h]
        push ecx
        push 10181374h
        mov edi, dword ptr [eax + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 10181374h
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 6C E1 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe1
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 9
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0a4h]
        mov edx, dword ptr [esp + 0a0h]
        inc ecx
        lea eax, [esp + 18h]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 18h]
        push 10181358h
        push ecx
        lea edx, [esp + 20h]
        push 10181350h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        add esp, 10h
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 F4 7B FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes 8B 1D A8 50 17 10: mov ebx, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        lea eax, [esp + 18h]
        mov edi, dword ptr [ecx + 50h]
        push edx
        push eax
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        lea ecx, [esp + 1ch]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 C2 E0 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 68h]
        push 1018133ch
        ; Exact mapped bytes E8 9E 7B FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        lea edx, [esp + 10h]
        push edx
        push 1018133ch
        mov edi, dword ptr [ecx + 50h]
        mov ebp, dword ptr [edi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        push 1018133ch
        mov ecx, edi
        ; Exact mapped bytes FF 55 04: call dword ptr [ebp + 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 72 E0 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 64h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, 131h
        ; Exact mapped bytes 0F 8F 20 02 00 00: jg 0x10020f2b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E7 01 00 00: je 0x10020ef8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ffffff38h
        cmp eax, 68h
        ; Exact mapped bytes 0F 87 74 03 00 00: ja 0x10021093
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 100210e8h]
        ; Exact mapped bytes FF 24 8D CC 10 02 10: jmp dword ptr [ecx*4 + 0x100210cc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        push 1018131ch
        ; Exact mapped bytes E8 05 7B FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 64h]
        lea eax, [esp + 10h]
        push eax
        push 1018131ch
        mov edi, dword ptr [edx + 50h]
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        push 1018131ch
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 4]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 D5 DF 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xdf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esp + 0a8h]
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 0c8h
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0a0h]
        lea edx, [esp + 18h]
        push ecx
        push 101812f0h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 64h]
        add esp, 0ch
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes E8 6E 7A FF FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        lea edx, [esp + 10h]
        lea eax, [esp + 18h]
        push edx
        mov edi, dword ptr [ecx + 50h]
        push eax
        mov ebx, dword ptr [edi]
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 1ch]
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF 53 04: call dword ptr [ebx + 4]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 64h]
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 4]
        sar eax, 1
        sub edx, eax
        add edx, 0c8h
        push edx
        ; Exact mapped bytes E8 3E DF 0D 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xdf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 0a8h]
        mov edx, dword ptr [esi]
        mov dword ptr [esi + 90h], ecx
        mov ecx, esi
        mov dword ptr [esi + 74h], 12ch
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 101812cch
        mov ecx, esi
        ; Exact mapped bytes E8 C3 C8 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 12dh
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0a0h]
        lea eax, [esp + 18h]
        push edx
        push 101812a4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 81 C8 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 12eh
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 10181288h
        mov ecx, esi
        ; Exact mapped bytes E8 5A C8 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 12fh
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 1018126ch
        mov ecx, esi
        ; Exact mapped bytes E8 33 C8 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 130h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 10181238h
        mov ecx, esi
        ; Exact mapped bytes E8 0C C8 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        push 1018121ch
        mov ecx, esi
        ; Exact mapped bytes E8 50 03 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 131h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        cmp eax, 1f4h
        ; Exact mapped bytes 0F 8F E4 00 00 00: jg 0x1002101a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x10020fda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 132h
        ; Exact mapped bytes 74 64: je 0x10020fa7
        __asm _emit 0x74
        __asm _emit 0x64
        sub eax, 5eh
        ; Exact mapped bytes 0F 85 47 01 00 00: jne 0x10021093
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0a0h]
        lea eax, [esp + 18h]
        push edx
        push 101811e8h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 9D C7 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 101811c8h
        mov ecx, esi
        ; Exact mapped bytes E8 E1 02 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 0a8h]
        mov ecx, esi
        mov dword ptr [esi + 90h], edx
        mov edx, dword ptr [esi]
        mov dword ptr [esi + 74h], 190h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 10181190h
        mov ecx, esi
        ; Exact mapped bytes E8 5D C7 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 10181174h
        mov ecx, esi
        ; Exact mapped bytes E8 A1 02 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 132h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        push 10181150h
        mov ecx, esi
        ; Exact mapped bytes E8 2A C7 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        push 1018112ch
        mov ecx, esi
        ; Exact mapped bytes E8 6E 02 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0a8h]
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 90h], eax
        mov dword ptr [esi + 74h], 1f4h
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        sub eax, 258h
        ; Exact mapped bytes 74 38: je 0x10021059
        __asm _emit 0x74
        __asm _emit 0x38
        sub eax, 64h
        ; Exact mapped bytes 75 6D: jne 0x10021093
        __asm _emit 0x75
        __asm _emit 0x6d
        push 1018110ch
        mov ecx, esi
        ; Exact mapped bytes E8 DE C6 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push 101810ech
        mov ecx, esi
        ; Exact mapped bytes E8 22 02 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [esi + 74h], 2bch
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0a0h]
        lea edx, [esp + 18h]
        push ecx
        push 101810c8h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 18h]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 90 C6 FF FF: call 0x1001d710
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push 101810b4h
        mov ecx, esi
        ; Exact mapped bytes E8 D4 01 00 00: call 0x10021260
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 74h], 258h
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 88h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
