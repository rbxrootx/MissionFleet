// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432D12 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00432d12_00432D12() {
    __asm {
        mov eax, 43ac1ah
        ; Exact mapped bytes E8 EC C8 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        push edi
        push 0ah
        lea ecx, [esi + 4]
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 D7 A8 FF FF: call 0x42d605
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        lea edi, [esi + 20h]
        push 4
        mov ecx, edi
        ; Exact mapped bytes E8 C7 A8 FF FF: call 0x42d605
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 7
        mov ecx, edi
        mov byte ptr [ebp - 4], 1
        mov dword ptr [esi], 43ead8h
        ; Exact mapped bytes E8 F5 A8 FF FF: call 0x42d648
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [esi + 3ch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 40h], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 44h], eax
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
