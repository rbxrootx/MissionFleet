// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883BC15 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5883bc15_5883BC15() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        push dword ptr [ebp + 8]
        lea eax, [ebp - 8]
        mov edi, ecx
        push eax
        ; Exact mapped bytes E8 D1 EB FF FF: call 0x5883a7fb
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 4]
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B EE FF FF: call 0x5883aac0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push dword ptr [ebp - 4]
        mov esi, eax
        mov ecx, edi
        push dword ptr [ebp - 8]
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 12 FD FF FF: call 0x5883b95c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        mov eax, esi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
