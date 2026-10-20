// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E060 .. +0x1F3 bytes.
extern "C" __declspec(naked) void FUN_0045e060_0045E060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 15h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 54h], ecx
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B6 06 00 00: call 0x45e740
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 1B 3C FE FF: call 0x441cb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x45e139
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax + 28h], 2
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 28h]
        shr edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 81 05 00 00: call 0x45e640
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [edx + eax*4]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 48 06 00 00: call 0x45e720
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [eax + ecx*4]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 800h
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BA 06 00 00: call 0x45e7b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 4
        mov edx, dword ptr [ebp - 54h]
        add edx, 14h
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x45e244
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 28h]
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 24h]
        lea eax, [edx + eax*4 - 4]
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 20h], eax
        ; Exact mapped bytes 73 56: jae 0x45e1a7
        __asm _emit 0x73
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 4
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [edx + 20h], ecx
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 AD 05 00 00: call 0x45e720
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 20h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 2A 06 00 00: call 0x45e7b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        add edx, 14h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x45e244
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ecx + 20h]
        sub eax, dword ptr [edx + 10h]
        sar eax, 2
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B6 04 00 00: call 0x45e680
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        lea edx, [ecx + eax*4]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 3D 05 00 00: call 0x45e720
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 BA 05 00 00: call 0x45e7b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 88 05 00 00: call 0x45e7b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        add edx, 14h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        pop edi
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 91 A5 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
