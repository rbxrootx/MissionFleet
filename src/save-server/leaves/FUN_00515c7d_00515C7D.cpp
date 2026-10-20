// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515C7D .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00515c7d_00515C7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 29 FC F4 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 80h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x515cbf
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 F9 BD 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 4cd820h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 515900h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x515d3a
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 83 3F FC FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x515d12
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 674cach
        ; Exact mapped bytes E8 33 30 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515d12
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x515ceb
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 84 F0 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes E8 5E 8D FB FF: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x8d
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x515d51
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 20h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp + 8]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x515d75
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [edx + 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
