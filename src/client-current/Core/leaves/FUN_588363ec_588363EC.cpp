// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588363EC .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_588363ec_588363EC() {
    __asm {
        push esi
        push edi
        push 588f1338h
        mov esi, ecx
        ; Exact mapped bytes E8 59 5F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push 1
        xor edi, edi
        push edi
        push 4
        push edi
        push -1
        ; Exact mapped bytes FF 15 A8 42 89 58: call dword ptr [0x588942a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 5bd0h], eax
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883641a
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 42: jmp 0x5883645c
        __asm _emit 0xeb
        __asm _emit 0x42
        push edi
        push edi
        push edi
        push 2
        push eax
        ; Exact mapped bytes FF 15 B4 42 89 58: call dword ptr [0x588942b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 5bd4h], eax
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5883643e
        __asm _emit 0x75
        __asm _emit 0x0e
        push dword ptr [esi + 5bd0h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB D8: jmp 0x58836416
        __asm _emit 0xeb
        __asm _emit 0xd8
        push 1
        push 588f1358h
        ; Exact mapped bytes E8 09 5F 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [esi + 5bd4h]
        ; Exact mapped bytes E8 39 64 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov al, 1
        pop edi
        pop esi
        ret
    }
}
