// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585234D0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_585234d0_585234D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        push 48h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 ED 98 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x98
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        push 2
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes E8 DA 98 32 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x98
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF FB FF FF: call 0x58523100
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
