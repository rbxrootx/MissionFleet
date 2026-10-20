// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005083EB .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_005083eb_005083EB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e653h
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
        sub esp, 0ch
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F6 C8 01 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 1
        push 1004h
        push 0f000h
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50844a
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A4 44 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 2E: jmp 0x508478
        __asm _emit 0xeb
        __asm _emit 0x2e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 C9 01 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 18 96 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 74 44 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
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
