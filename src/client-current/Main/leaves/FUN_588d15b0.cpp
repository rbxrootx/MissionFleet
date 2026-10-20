// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D15B0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_588d15b0() {
    __asm {
        mov edx, dword ptr [ecx + 70h]
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [edx + 50h], 5
        mov edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 1ch]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 A0 45 A2 58: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0a00h]
        push 0
        push 4
        ; Exact mapped bytes E8 3E 7C FF FF: call 0x588c9250
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
