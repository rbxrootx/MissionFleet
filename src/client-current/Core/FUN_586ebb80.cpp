// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EBB80 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_586ebb80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 02: jne 0x586ebbac
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 41: jmp 0x586ebbed
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C C3 D9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 54 C3 D9 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 00 8F E1 FF: call 0x58504ae0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0xe1
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
