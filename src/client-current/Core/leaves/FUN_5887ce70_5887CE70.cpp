// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CE70 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5887ce70_5887CE70() {
    __asm {
        push 5884ed90h
        ; Exact mapped bytes 64 FF 35 00 00 00 00: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esp + 10h], ebp
        lea ebp, [esp + 10h]
        sub esp, eax
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor dword ptr [ebp - 4], eax
        xor eax, ebp
        mov dword ptr [ebp - 1ch], eax
        push eax
        mov dword ptr [ebp - 18h], esp
        push dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], 0fffffffeh
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
