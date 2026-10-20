// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410CAE .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_00410cae_00410CAE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10ch], 0
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x410db1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 66: mov cx, word ptr [eax + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x66
        ; Exact mapped bytes 66 81 E1 FF 00: and cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        and ecx, 0ffffh
        or edx, ecx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 104h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 8]
        or eax, dword ptr [ecx + 10ch]
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 4E 82 0D 00: call 0x4e8f74
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 40cach]
        add ecx, 4bb0h
        ; Exact mapped bytes E8 32 82 0D 00: call 0x4e8f74
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x82
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 56: mov dx, word ptr [ecx + 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x56
        cmp edx, 1
        ; Exact mapped bytes 75 61: jne 0x410db1
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + 40cach]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 104h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 4A 04 4C 00 00: mov ax, word ptr [edx + ecx*2 + 0x4c04]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 3E: jle 0x410db1
        __asm _emit 0x7e
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ecx + 40cach]
        ; Exact mapped bytes 66 8B 8C 50 04 4C 00 00: mov cx, word ptr [eax + edx*2 + 0x4c04]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 104h]
        mov edx, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + 10h]
        mov edx, dword ptr [edx + 40cach]
        ; Exact mapped bytes 66 89 8C 42 04 4C 00 00: mov word ptr [edx + eax*2 + 0x4c04], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 25 7A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
