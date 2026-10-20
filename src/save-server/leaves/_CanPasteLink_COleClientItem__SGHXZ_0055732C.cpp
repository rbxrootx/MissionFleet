// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055732C .. +0x5D bytes.
extern "C" __declspec(naked) void _CanPasteLink_COleClientItem__SGHXZ_0055732C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 3C 71 68 00: mov eax, dword ptr [0x68713c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x55737b
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 48 71 68 00: mov ecx, dword ptr [0x687148]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x55737b
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 15 4C 71 68 00: mov edx, dword ptr [0x68714c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55737b
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes A1 30 71 68 00: mov eax, dword ptr [0x687130]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 2C BF 68 00: call dword ptr [0x68bf2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x55737b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x557382
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
