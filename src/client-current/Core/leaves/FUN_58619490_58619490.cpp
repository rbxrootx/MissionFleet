// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58619490 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_58619490_58619490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
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
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 5F E8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 5F E8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x5f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 42h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 02 C1 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc1
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 98h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 5ah
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 50h
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D1 C0 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 74h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 50h
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 C0 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0a4h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 82h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0b6h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A C0 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc0
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0a4h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 82h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 106h
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 34 C0 19 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc0
        __asm _emit 0x19
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
