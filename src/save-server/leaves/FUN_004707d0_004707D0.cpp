// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004707D0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_004707d0_004707D0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 44 DE 67 00: mov eax, dword ptr [0x67de44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 DE 67 00: mov ecx, dword ptr [0x67de34]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 24 DE 67 00: mov edx, dword ptr [0x67de24]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 04 DE 67 00: mov eax, dword ptr [0x67de04]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
