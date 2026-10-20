// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD6AA .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004cd6aa_004CD6AA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c69ah
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 33 38 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D0 37 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        lea eax, [ebp + 0ch]
        push eax
        push 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C5 04 02 00: call 0x4edbc0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 FD 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 30 01 02 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
