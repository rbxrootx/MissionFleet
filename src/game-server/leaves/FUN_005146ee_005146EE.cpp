// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005146EE .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_005146ee_005146EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 01 FE FF: call 0x4f48f3
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514710
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 1C: jmp 0x51472c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 04 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 74 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
