// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B320 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5879b320_5879B320() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891c88h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [ebp - 10h], edi
        lea esi, [edi + 8]
        mov dword ptr [ebp - 4], 0
        push 0
        mov ecx, esi
        mov dword ptr [edi], 588b7318h
        ; Exact mapped bytes E8 0D D9 FF FF: call 0x58798c70
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 D3 0B 00 00: call 0x5879bf40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, edi
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
