// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535BE0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_58535be0_58535BE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        push 8
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 0ach
        push edx
        ; Exact mapped bytes E8 DC 71 31 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x71
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 9B F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 FE FF FF: call 0x58535b30
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
