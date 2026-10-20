// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053D930 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_0053d930_0053D930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 00 6E 68 00 00: cmp dword ptr [0x686e00], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x53d959
        __asm _emit 0x74
        __asm _emit 0x14
        push 30ah
        push 6720f4h
        ; Exact mapped bytes E8 EC B3 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53d959
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x53d93c
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 34 BD 68 00: call dword ptr [0x68bd34]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 9F 42 FF FF: call 0x531c0d
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7E 06: jle 0x53d97a
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7F 14: jg 0x53d98e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 30dh
        push 6720f4h
        ; Exact mapped bytes E8 B7 B3 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53d98e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x53d96e
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7E 07: jle 0x53d9a1
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 20h
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0fh
        sar edx, 4
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 4
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 4
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 98h]
        add ecx, eax
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0ch
        ; Exact mapped bytes 7E 0A: jle 0x53d9ee
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0ch
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7E 07: jle 0x53d9fb
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 20h
        push 80h
        push 0ffh
        lea edx, [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 AF 7E F2 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7e
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 6
        sar ecx, 1
        imul eax, ecx
        lea edx, [ebp + eax - 94h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 14h], 635540h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x53da4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 58: jge 0x53daa8
        __asm _emit 0x7d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov ecx, dword ptr [ebp - 98h]
        shl edx, cl
        not edx
        ; Exact mapped bytes 66 89 95 60 FF FF FF: mov word ptr [ebp - 0xa0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 0a0h]
        mov byte ptr [eax + 1], cl
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*2]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 99: jmp 0x53da41
        __asm _emit 0xeb
        __asm _emit 0x99
        lea edx, [ebp - 94h]
        push edx
        push 1
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 84 B6 68 00: call dword ptr [0x68b684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 6E 68 00: mov dword ptr [0x686e00], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 6E 68 00 00: cmp dword ptr [0x686e00], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x53daf3
        __asm _emit 0x75
        __asm _emit 0x24
        push 6721c0h
        push 6721f4h
        ; Exact mapped bytes E8 37 2B F6 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        push 7fe3h
        push 0
        ; Exact mapped bytes FF 15 38 BD 68 00: call dword ptr [0x68bd38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 6E 68 00: mov dword ptr [0x686e00], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
