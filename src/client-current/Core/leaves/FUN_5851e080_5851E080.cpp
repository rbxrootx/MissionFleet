// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E080 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_5851e080_5851E080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 14h]
        sub eax, dword ptr [ebp - 0ch]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 77 55: ja 0x5851e0f5
        __asm _emit 0x77
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4C 4A FE FF: call 0x58502b00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 D2 4C FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*2]
        push eax
        ; Exact mapped bytes E8 F3 1A FB FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 1E: jmp 0x5851e113
        __asm _emit 0xeb
        __asm _emit 0x1e
        xor ecx, ecx
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD F0 FF FF: call 0x5851d1d0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
