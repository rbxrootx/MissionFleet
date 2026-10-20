// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D8AA0 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_584d8aa0_584D8AA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ecx + 54h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 69 FC FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2D 69 FC FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 38h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 42h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 50h
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D0 CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 5ah
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 50h
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AB CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 74h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 50h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 86 CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 90h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 82h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0b6h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 50 CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 106h
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 CA 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xca
        __asm _emit 0x2d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 90h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 0f0h
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E4 C9 2D 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc9
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
