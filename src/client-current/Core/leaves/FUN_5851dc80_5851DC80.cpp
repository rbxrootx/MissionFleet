// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DC80 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5851dc80_5851DC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 80 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A4 80 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 80 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 F0 41 89 58: call dword ptr [0x588941f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
