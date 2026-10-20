// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F04B .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_5883f04b_5883F04B() {
    __asm {
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x5883f05c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 02: je 0x5883f066
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB ED: jmp 0x5883f053
        __asm _emit 0xeb
        __asm _emit 0xed
        push 0
        push 0
        ; Exact mapped bytes E8 76 E3 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
