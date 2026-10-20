// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867F3D0 .. +0x1D8 bytes.
extern "C" __declspec(naked) void FUN_5867f3d0_5867F3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 188h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 8], eax
        imul eax, dword ptr [ebp + 8], 2ch
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 04 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 188h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0ch], ecx
        imul eax, dword ptr [ebp + 0ch], 2ch
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FD 03 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 188h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 10h], ecx
        imul eax, dword ptr [ebp + 10h], 2ch
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C8 03 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 188h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 14h], eax
        imul eax, dword ptr [ebp + 14h], 2ch
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 03 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AF BC 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 198h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7B BC 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 10h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 47 BC 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 14h]
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 13 BC 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xbc
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1F AD 00 00: call 0x5868a2c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
