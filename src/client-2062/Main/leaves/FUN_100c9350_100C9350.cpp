// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9350 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_100c9350_100C9350() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor edx, edx
        push edi
        mov eax, dword ptr [esi + 0b0h]
        lea ebx, [esi + 90h]
        mov ecx, dword ptr [eax + 0e74h]
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 8B 91 48 03 00 00: mov dx, word ptr [ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shr edx, 0dh
        mov dword ptr [eax + 50h], edx
        mov ecx, dword ptr [esi + 0b0h]
        xor eax, eax
        xor edi, edi
        mov edx, dword ptr [ecx + 0e80h]
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 EB AA 03 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 5D AA 03 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebx]
        inc edi
        add ebx, 4
        cmp edi, 2
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 7C D9: jl 0x100c939a
        __asm _emit 0x7c
        __asm _emit 0xd9
        lea ebp, [esi + 98h]
        xor edi, edi
        mov ebx, ebp
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 BA AA 03 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 2C AA 03 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        inc edi
        add ebx, 4
        cmp edi, 2
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 7C D9: jl 0x100c93cb
        __asm _emit 0x7c
        __asm _emit 0xd9
        mov edx, dword ptr [esi + 80h]
        mov ecx, 2
        cmp dword ptr [edx + 88h], ecx
        ; Exact mapped bytes 7D 0D: jge 0x100c9412
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [esi + 94h]
        xor eax, eax
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes EB 02: jmp 0x100c9414
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 80h]
        cmp dword ptr [edx + 88h], eax
        ; Exact mapped bytes 75 09: jne 0x100c942b
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [esi + 90h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [esi + 84h]
        cmp dword ptr [edx + 88h], ecx
        ; Exact mapped bytes 7D 09: jge 0x100c9442
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 9ch]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 84h]
        cmp dword ptr [edx + 88h], eax
        ; Exact mapped bytes 75 06: jne 0x100c9456
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp]
        mov dword ptr [ecx + 50h], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
