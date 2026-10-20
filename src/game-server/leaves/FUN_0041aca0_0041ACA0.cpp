// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041ACA0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0041aca0_0041ACA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8D 0B 00 00: call 0x41b860
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EA 1D 00 00: call 0x41cae0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 33 FE FF FF: call 0x41ab40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 DA 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
