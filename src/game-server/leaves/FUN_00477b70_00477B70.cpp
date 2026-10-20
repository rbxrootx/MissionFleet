// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477B70 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00477b70_00477B70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 23 09 00 00: call 0x4784c0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 FF FF FF: call 0x477b20
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B9 10 00 00: call 0x478c70
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 0F 0C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
