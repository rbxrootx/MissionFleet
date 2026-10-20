// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EF6C .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_5883ef6c_5883EF6C() {
    __asm {
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x5883ef7d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 02: je 0x5883ef87
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB ED: jmp 0x5883ef74
        __asm _emit 0xeb
        __asm _emit 0xed
        push 0
        push 0
        ; Exact mapped bytes E8 55 E4 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
