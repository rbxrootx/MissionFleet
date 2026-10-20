// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DF50 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5856df50_5856DF50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        push 588a98c8h
        push 588a98d8h
        push 80000002h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E5 04 00 00: call 0x5856e480
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 9]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 588a9908h
        push 588a9918h
        push 80000002h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF 04 00 00: call 0x5856e480
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
