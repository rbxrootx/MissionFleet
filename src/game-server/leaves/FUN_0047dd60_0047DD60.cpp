// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DD60 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0047dd60_0047DD60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 18 01 00 00: call 0x47de90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dl, byte ptr [eax]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 31 01 00 00: call 0x47dec0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 44 AA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
