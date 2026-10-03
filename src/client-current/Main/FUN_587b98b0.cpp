// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B98B0 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_587b98b0() {
    __asm {
        // 0x587B98B0: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x587B98B3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587B98B8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587B98BA: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B98BE: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B98C2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B98C4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B98C6: jne 0x587b98f0
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x587B98C8: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587B98CC: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587B98CE: lea eax, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B98D2: push eax
        __asm _emit 0x50
        // 0x587B98D3: movzx eax, word ptr [esp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B98D8: push edx
        __asm _emit 0x52
        // 0x587B98D9: movzx edx, byte ptr [esp + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B98DE: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x587B98E1: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B98E3: movzx edx, byte ptr [esp + 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B98E8: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x587B98EB: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B98ED: push eax
        __asm _emit 0x50
        // 0x587B98EE: jmp 0x587b9949
        __asm _emit 0xEB
        __asm _emit 0x59
        // 0x587B98F0: mov dx, word ptr [esp + 0x38]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B98F5: mov word ptr [esp + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B98FA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587B98FC: mov dword ptr [esp + 6], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x587B9900: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B9903: mov dword ptr [esp + 0xa], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x587B9907: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B990A: mov dword ptr [esp + 0xe], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x587B990E: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B9911: mov dword ptr [esp + 0x12], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x12
        // 0x587B9915: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x587B9918: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587B991B: mov dword ptr [esp + 0x16], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x587B991F: push 0x1a
        __asm _emit 0x6A
        __asm _emit 0x1A
        // 0x587B9921: mov dword ptr [esp + 0x1e], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x587B9925: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B9929: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B992D: push edx
        __asm _emit 0x52
        // 0x587B992E: movzx edx, word ptr [esp + 0x30]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587B9933: push eax
        __asm _emit 0x50
        // 0x587B9934: movzx eax, byte ptr [esp + 0x38]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587B9939: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x587B993C: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587B993E: movzx eax, byte ptr [esp + 0x3c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587B9943: shl edx, 8
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x587B9946: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x587B9948: push edx
        __asm _emit 0x52
        // 0x587B9949: push 0x80011004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B994E: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x73
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9953: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B9957: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587B9959: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x32
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B995E: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587B9961: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
