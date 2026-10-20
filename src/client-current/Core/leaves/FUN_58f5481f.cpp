// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F5481F .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58f5481f() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes F8: clc
        __asm _emit 0xf8
        ; Exact mapped bytes 81 FD E2 19 2F 09: cmp ebp, 0x92f19e2
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xe2
        __asm _emit 0x19
        __asm _emit 0x2f
        __asm _emit 0x09
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 3B E7: cmp esp, edi
        __asm _emit 0x3b
        __asm _emit 0xe7
        ; Exact mapped bytes 80 FA 32: cmp dl, 0x32
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0x32
        ; Exact mapped bytes 2B C0: sub eax, eax
        __asm _emit 0x2b
        __asm _emit 0xc0
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes F9: stc
        __asm _emit 0xf9
        ; Exact mapped bytes 80 FC 6E: cmp ah, 0x6e
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0x6e
        ; Exact mapped bytes 39 45 08: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes E9 57 8D D8 FF: jmp 0x58cdd596
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xff
    }
}
