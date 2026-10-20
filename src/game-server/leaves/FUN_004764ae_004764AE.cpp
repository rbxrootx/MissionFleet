// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004764AE .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004764ae_004764AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 A5 03 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 81 02 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 78 05 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x476505
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47650a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 CC 22 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
