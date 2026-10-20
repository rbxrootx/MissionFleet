// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509C6B .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00509c6b_00509C6B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B 85 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1F 88 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0a000h
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E9 66 FF FF: call 0x500386
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
