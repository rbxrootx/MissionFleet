// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005211D5 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_005211d5_005211D5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f23bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A1 D1 00 00: call 0x52e39a
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cch
        ; Exact mapped bytes E8 60 E2 FF FF: call 0x51f470
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58847ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 108h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
