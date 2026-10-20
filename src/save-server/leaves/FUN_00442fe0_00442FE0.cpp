// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442FE0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00442fe0_00442FE0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1008h
        ; Exact mapped bytes E8 B3 2F 02 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 1004h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1008h], ecx
        mov edx, dword ptr [ebp - 1004h]
        push edx
        mov eax, dword ptr [ebp - 1008h]
        push eax
        push 1000h
        lea ecx, [ebp - 1000h]
        push ecx
        ; Exact mapped bytes E8 B2 5A 02 00: call 0x468ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        lea edx, [ebp - 1000h]
        push edx
        ; Exact mapped bytes FF 15 00 B8 68 00: call dword ptr [0x68b800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1004h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
